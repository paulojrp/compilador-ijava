void printStatement(Statement*);
void printExp(Exp*);

int identation = 0;
int isParams = 0;


// Statics
void ident() {
	int i;
	for (i = 0; i < identation; ++i)
		printf("\t");
}

void printType(Type type) {
	ident();

	if (type == String)
		printf("String\n");
	else if (type == Bool)
		printf("Bool");
	else if (type == Int)
		printf("Bool");
	else if (type == StringArray)
		printf("StringArray");
	else if (type == BoolArray)
		printf("BoolArray");
	else if (type == IntArray)
		printf("IntArray");
	else if (type == Void)
		printf("Void");
}

void printId(char* id) {
	if (id != NULL) {
		ident(); printf("Id(%s)\n", id);
	}
}

void printIds(Ids* ids) {
	if (ids != NULL) {
		printId(ids->name);
		printIds(ids->next);
	}
}


// Expressions
void printOper(ExpType type, Oper* oper) {
	ident();

	if (type == Or)
		printf("Or\n");
	else if (type == And)
		printf("And\n");
	else if (type == Eq)
		printf("Eq\n");
	else if (type == Neq)
		printf("Neq\n");
	else if (type == Lt)
		printf("Lt\n");
	else if (type == Gt)
		printf("Gt\n");
	else if (type == Leq)
		printf("Leq\n");
	else if (type == Add)
		printf("Add\n");
	else if (type == Sub)
		printf("Sub\n");
	else if (type == Mul)
		printf("Mul\n");
	else if (type == Div)
		printf("Div\n");
	else if (type == Mod)
		printf("Mod\n");
	else if (type == Not)
		printf("Not\n");
	else if (type == Minus)
		printf("Minus\n");
	else if (type == Plus)
		printf("Plus\n");
	else if (type == Length)
		printf("Length\n");
	else if (type == NewInt)
		printf("NewInt\n");
	else if (type == NewBool)
		printf("NewBool\n");
	else if (type == Parse)
		printf("Parse\n");
	else if (type == Call)
		printf("Call\n");
	else if (type == LoadArray)
		printf("LoadArray\n");

	identation++;
	printId(oper->id);
	printExp(oper->params);
	identation--;
}

void printExp(Exp* exp) {
	if (exp == NULL) {
		return;
	} else if (exp->type == Id) {
		printId(exp->content.id);
	} else if (exp->type == IntLit) {
		ident(); printf("IntLit(%d)\n", exp->content.literal);
	} else if (exp->type == BoolLit) {
		ident(); printf("BoolLit(%s)\n", exp->content.literal ? "true" : "false");
	} else
		printOper(exp->type, &exp->content.oper);

	printExp(exp->next);
}


// Statements
void printStore(Store* store) {
	ident(); printf("Store\n");

	identation++;
	printId(store->target);
	printExp(&store->value);
	identation--;
}

void printPrint(Print* print) {
	ident(); printf("Print\n");

	identation++;
	printExp(&print->value);
	identation--;
}

void printIf(IfElse* ifelse) {
	ident(); printf("IfElse\n");

	identation++;
	printExp(ifelse->condition);
	printStatement(ifelse->first);
	printStatement(ifelse->second);
	identation--;
}

void printWhile(While* _while) {
	ident(); printf("While\n");

	identation++;
	printExp(_while->condition);
	printStatement(_while->statement);
	identation--;
}

void printReturn(Return* _return) {
	ident(); printf("Return\n");

	identation++;
	printExp(_return->value);
	identation--;
}

void printStatement(Statement* state) {
	if (state == NULL)
		return;
	else if (state->type == IfType)
		printIf(&state->content.ifelse);
	else if (state->type == WhileType)
		printWhile(&state->content._while);
	else if (state->type == ReturnType)
		printReturn(&state->content._return);
	else if (state->type == StoreType)
		printStore(&state->content.store);
	else if (state->type == PrintType)
		printPrint(&state->content.print);

	printStatement(state->next);
}


// Declarations
void printVar(VarDecl* var) {
	if (var == NULL)
		return;

	ident();
	if (isParams)
		printf("ParamDeclaration\n");
	else
		printf("VarDecl\n");

	identation++;
	printType(var->type);
	printIds(&var->ids);
	identation--;

	printVar(var->next);
}

void printMethod(MethodDecl* method) {
	if (method == NULL)
		return;

	ident(); printf("MethodDecl\n"); identation++;
	printType(method->type);
	printId(method->id);

	ident(); printf("MethodParams\n");
	identation++; isParams = 1;
	printVar(method->params);
	identation--; isParams = 0;

	ident(); printf("MethodBody\n"); identation++;
	printVar(method->vars);
	printStatement(method->statements);
	identation-=2;
}

void printDeclaration(Declaration* decl) {
	if (decl->isMethod) {
		printMethod(decl->method);
	} else {
		printVar(decl->var);
	}

	printDeclaration(decl->next);
}

void printProgram(Program* program) {
	ident(); printf("Program\n");

	identation++;
	printId(program->id);
	printDeclaration(program->declarations);
	identation--;
}