.PHONY: clean All

All:
	@echo "----------Building project:[ Section2Structures1 - Debug ]----------"
	@cd "Section2Structures1" && "$(MAKE)" -f  "Section2Structures1.mk"
clean:
	@echo "----------Cleaning project:[ Section2Structures1 - Debug ]----------"
	@cd "Section2Structures1" && "$(MAKE)" -f  "Section2Structures1.mk" clean
