#ifndef SASL_CODE_GENERATOR_LLVM_CGLLVM_CONTEXTS_H
#define SASL_CODE_GENERATOR_LLVM_CGLLVM_CONTEXTS_H

#include <sasl/include/code_generator/forward.h>
#include <sasl/include/code_generator/codegen_context.h>

namespace llvm{
	class Value;
	class Function;
	class GlobalVariable;
	
	class FunctionType;
	class Type;
}

BEGIN_NS_SASL_CODE_GENERATOR();

//////////////////////////////////////////////////////////
// used by a lot of node for common information storage

class cgllvm_common_context: public codegen_context{
public:
	typedef codegen_context base_type;
	cgllvm_common_context();

	llvm::Value* val;
	llvm::Function* func;

	const llvm::Type* type;
	const llvm::FunctionType* func_type;

	llvm::GlobalVariable* gvar;
};

class cgllvm_type_context: public codegen_context{
public:
	typedef codegen_context base_type;
	cgllvm_type_context();

	const llvm::Type* basic_type;
};
END_NS_SASL_CODE_GENERATOR();

#endif