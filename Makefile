PKGS=sorting binary_tree list numerical queue searching stack

all:
	@for pkg in $(PKGS); do make -C $$pkg all; done

clean:
	@for pkg in $(PKGS); do make -C $$pkg clean; done

test:
	@for pkg in $(PKGS); do make -C $$pkg test; done

.PHONY: all clean test
