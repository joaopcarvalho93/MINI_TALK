# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 16:21:22 by jhorta-c          #+#    #+#              #
#    Updated: 2024/09/02 15:29:58 by jhorta-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#----------------------------LIBFT SOURCE FILES----------------------------------------------------------------------------------------------------
LIBFT_PATH = ./libft
LIBFT_LIB = $(LIBFT_PATH)/libft.a

#----------------------------MAINFILES----------------------------------------------------------------------------------------------------

NAME_SERVER = server
NAME_CLIENT = client
CLIENT_SRCS = client.c
SERVER_SRCS = server.c
CLIENT_BONUS_SRCS = client_bonus.c
SERVER_BONUS_SRCS = server_bonus.c
SRCOBJ = objects/
SRCOBJ_BONUS = objects_bonus/
SRC = CLIENT_SRCS SERVER_SRCS
SRC_BONUS = CLIENT_BONUS_SRCS SERVER_BONUS_SRCS


#----------------------------TESTER AND COLOURS----------------------------------------------------------------------------------------------------

GREEN = \033[1;32m
ORANGE = \033[1;33m
RED = \033[1;31m
CYAN = \033[1;36mF
RESET = \033[0m


#----------------------------COMPILATION----------------------------------------------------------------------------------------------------



CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SERVER_OBJ = $(addprefix $(SRCOBJ), $(SERVER_SRCS:.c=.o))
CLIENT_OBJ = $(addprefix $(SRCOBJ), $(CLIENT_SRCS:.c=.o))
SERVER_BONUS_OBJ = $(addprefix $(SRCOBJ_BONUS), $(SERVER_BONUS_SRCS:.c=.o))
CLIENT_BONUS_OBJ = $(addprefix $(SRCOBJ_BONUS), $(CLIENT_BONUS_SRCS:.c=.o))
RM = rm -rf


all: $(NAME_SERVER) $(NAME_CLIENT)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_PATH) --no-print-directory

$(NAME_CLIENT): $(CLIENT_OBJ) $(LIBFT_LIB)
	@echo "Compiling server..."
	$(CC) $(CFLAGS) $(CLIENT_OBJ) -o $(NAME_CLIENT) $(LIBFT_LIB)
	@echo "$(CYAN)make$(RESET) $@ $(GREEN)[OK]$(RESET)"

$(NAME_SERVER): $(SERVER_OBJ) $(LIBFT_LIB)
	@echo "Compiling client..."
	$(CC) $(CFLAGS) $(SERVER_OBJ) -o $(NAME_SERVER) $(LIBFT_LIB)
	@echo "$(CYAN)make$(RESET) $@ $(GREEN)[OK]$(RESET)"

$(SRCOBJ)%.o: %.c
		@mkdir -p $(SRCOBJ)
		@mkdir -p $(dir $@)
		@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME_CLIENT)_bonus $(NAME_SERVER)_bonus

$(NAME_CLIENT)_bonus: $(CLIENT_BONUS_OBJ) $(LIBFT_LIB)
	@echo "Compiling client bonus..."
	$(CC) $(CFLAGS) $(CLIENT_BONUS_OBJ) -o $(NAME_CLIENT)_bonus $(LIBFT_LIB)
	@echo "$(CYAN)make$(RESET) $@ $(GREEN)[OK]$(RESET)"

$(NAME_SERVER)_bonus: $(SERVER_BONUS_OBJ) $(LIBFT_LIB)
	@echo "Compiling server bonus..."
	$(CC) $(CFLAGS) $(SERVER_BONUS_OBJ) -o $(NAME_SERVER)_bonus $(LIBFT_LIB)
	@echo "$(CYAN)make$(RESET) $@ $(GREEN)[OK]$(RESET)"

$(SRCOBJ_BONUS)%.o: %.c
		@mkdir -p $(SRCOBJ_BONUS)
		@mkdir -p $(dir $@)
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(SRCOBJ) 
	$(RM) $(SRCOBJ_BONUS)
	@echo "Cleaning objects...$(GREEN)[OK]$(RESET)"
	@$(MAKE) -C $(LIBFT_PATH) clean --no-print-directory
	@echo "$(CYAN)make$(RESET) $@ $(GREEN)[OK]$(RESET)"
fclean: clean
	$(RM) $(NAME_SERVER) $(NAME_CLIENT) $(NAME_CLIENT)_bonus $(NAME_SERVER)_bonus
	@echo "Cleaning $(NAME_SERVER) and $(NAME_CLIENT) and $(NAME_CLIENT)_bonus and $(NAME_SERVER)_bonus...$(GREEN)[OK]$(RESET)"
	$(MAKE) -C $(LIBFT_PATH) fclean --no-print-directory
	@echo "$(CYAN)make$(RESET) $@ $(GREEN)[OK]$(RESET)"

fnorm :
	@$(MAKE) -s fclean
	@python3 -m c_formatter_42 $(SRC) */*h
	norminette $(SRC) */*h

fnorm_bonus :
	@$(MAKE) -s fclean
	@python3 -m c_formatter_42 $(SRC_BONUS) */*h
	norminette $(SRC_BONUS) */*h

re: fclean all

bonus: $(CLIENT_BONUS_NAME) $(SERVER_BONUS_NAME)

.PHONY: all clean fclean re bonus