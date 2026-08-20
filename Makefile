NAME=sim
SRC=sim.sv

all: $(NAME)
	mv ./obj_dir/$(NAME) $(NAME)
	./$(NAME)


$(NAME): $(SRC)
	verilator --binary --trace-fst -o $(NAME) -Wall $(SRC) --top-module sim

clean:
	rm -rf obj_dir

fclean: clean
	rm -rf dump.fst
	rm $(NAME)

.PHONY: all clean fclean re
