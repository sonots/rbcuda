// // alias void* cudaStream_t;


// struct half {
//    ushort x;
// };

// struct half2 {
//    uint x;
// };

std::map<char*, size_t> CuBLAS_status_t = {
  {"CUBLAS_STATUS_SUCCESS", 0},
  {"CUBLAS_STATUS_NOT_INITIALIZED", 1},
  {"CUBLAS_STATUS_ALLOC_FAILED", 3},
  {"CUBLAS_STATUS_INVALID_VALUE", 7},
  {"CUBLAS_STATUS_ARCH_MISMATCH", 8},
  {"CUBLAS_STATUS_MAPPING_ERROR", 11},
  {"CUBLAS_STATUS_EXECUTION_FAILED", 13},
  {"CUBLAS_STATUS_INTERNAL_ERROR", 14},
  {"CUBLAS_STATUS_NOT_SUPPORTED", 15},
  {"CUBLAS_STATUS_LICENSE_ERROR", 16}
};

std::map<char*, size_t> CuBLAS_FillMode_t = {
  {"CUBLAS_FILL_MODE_LOWER", 0},
  {"CUBLAS_FILL_MODE_UPPER", 1}
};

std::map<char*, size_t> CuBLAS_DiagType_t = {
  {"CUBLAS_DIAG_NON_UNIT", 0},
  {"CUBLAS_DIAG_UNIT", 1}
};

std::map<char*, size_t> CuBLAS_SideMode_t = {
  {"CUBLAS_SIDE_LEFT", 0},
  {"CUBLAS_SIDE_RIGHT", 1}
};

const char* const CuBLAS_Operation_t[3] = {
  "CUBLAS_OP_N",
  "CUBLAS_OP_T",
  "CUBLAS_OP_C"
};

cublasOperation_t rbcu_cublasOperation_t(VALUE sym) {
  ID sym_id = SYM2ID(sym);

  for (size_t index = 0; index < 3; ++index) {
    if (sym_id == rb_intern(CuBLAS_Operation_t[index])) {
      return static_cast<cublasOperation_t>(index);
    }
  }

  VALUE str = rb_any_to_s(sym);
  rb_raise(rb_eArgError, "invalid data type symbol (:%s) specified", RSTRING_PTR(str));
}


std::map<char*, size_t> CuBLAS_PointerMode_t = {
  {"CUBLAS_POINTER_MODE_HOST", 0},
  {"CUBLAS_POINTER_MODE_DEVICE", 1}
};

std::map<char*, size_t> CuBLAS_AtomicsMode_t = {
  {"CUBLAS_ATOMICS_NOT_ALLOWED", 0},
  {"CUBLAS_ATOMICS_ALLOWED", 1}
};

/* Used by cublasSgemmEx */
std::map<char*, size_t> CuBLAS_DataType_t = {
  {"CUBLAS_DATA_FLOAT", 0},
  {"CUBLAS_DATA_DOUBLE", 1},
  {"CUBLAS_DATA_HALF", 2},
  {"CUBLAS_DATA_INT8", 3}
};



// /* Opaque structure holding CUBLAS library context */
// struct cublasContext;
// alias cublasHandle_t = cublasContext*;

static VALUE rb_cublasCreate_v2(VALUE self){
  rb_cublas_handle* handler = ALLOC(rb_cublas_handle);;
  cublasCreate_v2(&handler->handle);
  return Data_Wrap_Struct(CuBLASHandler, NULL, rbcu_free, handler);
}

static VALUE rb_cublasDestroy_v2(VALUE self, VALUE handler_val){
  rb_cublas_handle* handler;
  Data_Get_Struct(handler_val, rb_cublas_handle, handler);
  cublasDestroy_v2(handler->handle);
  return Qnil;
}

static VALUE rb_cublasGetVersion_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSetStream_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasGetStream_v2(VALUE self){
  return Qnil;
}


static VALUE rb_cublasGetPointerMode_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSetPointerMode_v2(VALUE self){
  return Qnil;
}


static VALUE rb_cublasGetAtomicsMode(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSetAtomicsMode(VALUE self){
  return Qnil;
}



static VALUE rb_cublasSetVector(VALUE self){
  return Qnil;
}

static VALUE rb_cublasGetVector(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSetMatrix(VALUE self){
  return Qnil;
}

static VALUE rb_cublasGetMatrix(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSetVectorAsync(VALUE self){
  return Qnil;
}

static VALUE rb_cublasGetVectorAsync(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSetMatrixAsync(VALUE self){
  return Qnil;
}

static VALUE rb_cublasGetMatrixAsync(VALUE self){
  return Qnil;
}




// void cublasXerbla (const(char)* srName, int info);
/* ---------------- CUBLAS BLAS1 functions ---------------- */
static VALUE rb_cublasSnrm2_v2(VALUE self){
return Qnil;
}

static VALUE rb_cublasDnrm2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasScnrm2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDznrm2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSdot_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDdot_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCdotu_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCdotc_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZdotu_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZdotc_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSscal_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDscal_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCscal_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCsscal_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZscal_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZdscal_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSaxpy_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDaxpy_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCaxpy_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZaxpy_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasScopy_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDcopy_v2(VALUE self){
  return Qnil;
}

/**/

static VALUE rb_cublasCcopy_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZcopy_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSswap_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDswap_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCswap_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZswap_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasIsamax_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasIdamax_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasIcamax_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasIzamax_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasIsamin_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasIdamin_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasIcamin_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasIzamin_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSasum_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDasum_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasScasum_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDzasum_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSrot_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDrot_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCrot_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCsrot_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZrot_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZdrot_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSrotg_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDrotg_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCrotg_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZrotg_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSrotm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDrotm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSrotmg_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDrotmg_v2(VALUE self){
  return Qnil;
}




/* host or device pointer */

/* --------------- CUBLAS BLAS2 functions  ---------------- */

/* GEMV */

/* host or device pointer */

/* host or device pointer */

static VALUE rb_cublasSgemv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgemv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgemv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgemv_v2(VALUE self){
  return Qnil;
}


/* GBMV */

static VALUE rb_cublasSgbmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgbmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgbmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgbmv_v2(VALUE self){
  return Qnil;
}

/* TRMV */

static VALUE rb_cublasStrmv_v2(VALUE self){
  return Qnil;
}
static VALUE rb_cublasDtrmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtrmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtrmv_v2(VALUE self){
  return Qnil;
}


/* TBMV */
static VALUE rb_cublasStbmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtbmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtbmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtbmv_v2(VALUE self){
  return Qnil;
}


/* TPMV */
static VALUE rb_cublasStpmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtpmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtpmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtpmv_v2(VALUE self){
  return Qnil;
}


/* TRSV */
static VALUE rb_cublasStrsv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtrsv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtrsv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtrsv_v2(VALUE self){
  return Qnil;
}


/* TPSV */
static VALUE rb_cublasStpsv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtpsv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtpsv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtpsv_v2(VALUE self){
  return Qnil;
}


/* TBSV */
static VALUE rb_cublasStbsv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtbsv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtbsv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtbsv_v2(VALUE self){
  return Qnil;
}


/* SYMV/HEMV */

static VALUE rb_cublasSsymv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDsymv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCsymv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZsymv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasChemv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZhemv_v2(VALUE self){
  return Qnil;
}


/* SBMV/HBMV */

/* host or device pointer */
static VALUE rb_cublasSsbmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDsbmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasChbmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZhbmv_v2(VALUE self){
  return Qnil;
}


/* SPMV/HPMV */

/* host or device pointer */

static VALUE rb_cublasSspmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDspmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasChpmv_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZhpmv_v2(VALUE self){
  return Qnil;
}


/* GER */

static VALUE rb_cublasSger_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDger_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgeru_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgerc_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgeru_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgerc_v2(VALUE self){
  return Qnil;
}


/* SYR/HER */

static VALUE rb_cublasSsyr_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDsyr_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCsyr_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZsyr_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCher_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZher_v2(VALUE self){
  return Qnil;
}


/* SPR/HPR */

static VALUE rb_cublasSspr_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDspr_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasChpr_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZhpr_v2(VALUE self){
  return Qnil;
}


/* SYR2/HER2 */

static VALUE rb_cublasSsyr2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDsyr2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCsyr2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZsyr2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCher2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZher2_v2(VALUE self){
  return Qnil;
}


/* SPR2/HPR2 */

static VALUE rb_cublasSspr2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDspr2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasChpr2_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZhpr2_v2(VALUE self){
  return Qnil;
}


/* ---------------- CUBLAS BLAS3 functions ---------------- */

/* GEMM */

/* host or device pointer */

static VALUE rb_cublasSgemm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgemm_v2(VALUE self, VALUE handler_val, VALUE transa, VALUE transb,
                                VALUE m, VALUE n, VALUE k, VALUE alpha_val,
                                VALUE a_val, VALUE lda, VALUE b_val, VALUE ldb,
                                VALUE beta_val, VALUE c_val, VALUE ldc){
  rb_cublas_handle* handler;
  Data_Get_Struct(handler_val, rb_cublas_handle, handler);
  dev_ptr* ptr_a;
  dev_ptr* ptr_b;
  dev_ptr* ptr_c;
  Data_Get_Struct(a_val, dev_ptr, ptr_a);
  Data_Get_Struct(b_val, dev_ptr, ptr_b);
  Data_Get_Struct(c_val, dev_ptr, ptr_c);

  const double alf = 1;
  const double bet = 0;
  const double *alpha = &alf;
  const double *beta = &bet;

  cublasDgemm_v2(handler->handle, rbcu_cublasOperation_t(transa), rbcu_cublasOperation_t(transb),
                                  NUM2INT(m), NUM2INT(n), NUM2INT(k), alpha,
                                  ptr_a->carray, NUM2INT(lda), ptr_b->carray, NUM2INT(ldb), beta, ptr_c->carray, NUM2INT(ldc));
  return Qnil;
}

static VALUE rb_cublasCgemm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgemm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasHgemm(VALUE self){
  return Qnil;
}

static VALUE rb_cublasSgemmEx(VALUE self){
  return Qnil;
}


/* SYRK */

/* host or device pointer */

static VALUE rb_cublasSsyrk_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDsyrk_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCsyrk_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZsyrk_v2(VALUE self){
  return Qnil;
}


/* HERK */

/* host or device pointer */

static VALUE rb_cublasCherk_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZherk_v2(VALUE self){
  return Qnil;
}


/* SYR2K */

/* host or device pointer */
static VALUE rb_cublasSsyr2k_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDsyr2k_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCsyr2k_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZsyr2k_v2(VALUE self){
  return Qnil;
}


/* HER2K */

/* host or device pointer */


static VALUE rb_cublasCher2k_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZher2k_v2(VALUE self){
  return Qnil;
}

/* SYRKX : eXtended SYRK*/

/* host or device pointer */


static VALUE rb_cublasSsyrkx(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDsyrkx(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCsyrkx(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZsyrkx(VALUE self){
  return Qnil;
}


/* HERKX : eXtended HERK */

/* host or device pointer */

static VALUE rb_cublasCherkx(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZherkx(VALUE self){
  return Qnil;
}


/* SYMM */

/* host or device pointer */

static VALUE rb_cublasSsymm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDsymm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCsymm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZsymm_v2(VALUE self){
  return Qnil;
}


/* HEMM */

/* host or device pointer */

static VALUE rb_cublasChemm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZhemm_v2(VALUE self){
  return Qnil;
}


/* TRSM */

/* host or device pointer */

static VALUE rb_cublasStrsm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtrsm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtrsm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtrsm_v2(VALUE self){
  return Qnil;
}


/* TRMM */

static VALUE rb_cublasStrmm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtrmm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtrmm_v2(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtrmm_v2(VALUE self){
  return Qnil;
}


/* BATCH GEMM */

/* host or device pointer */

static VALUE rb_cublasSgemmBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgemmBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgemmBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgemmBatched(VALUE self){
  return Qnil;
}


/* ---------------- CUBLAS BLAS-like extension ---------------- */
/* GEAM */

/* host or device pointer */

static VALUE rb_cublasSgeam(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgeam(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgeam(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgeam(VALUE self){
  return Qnil;
}


/* Batched LU - GETRF*/

/*Device pointer*/

/*Device Pointer*/
static VALUE rb_cublasSgetrfBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgetrfBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgetrfBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgetrfBatched(VALUE self){
  return Qnil;
}


/* Batched inversion based on LU factorization from getrf */

/*Device pointer*/

static VALUE rb_cublasSgetriBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgetriBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgetriBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgetriBatched(VALUE self){
  return Qnil;
}


/* Batched solver based on LU factorization from getrf */

static VALUE rb_cublasSgetrsBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgetrsBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgetrsBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgetrsBatched(VALUE self){
  return Qnil;
}


/* TRSM - Batched Triangular Solver */

/*Host or Device Pointer*/
static VALUE rb_cublasStrsmBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtrsmBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtrsmBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtrsmBatched(VALUE self){
  return Qnil;
}


/* Batched - MATINV*/

/*Device pointer*/

/*Device pointer*/
static VALUE rb_cublasSmatinvBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDmatinvBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCmatinvBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZmatinvBatched(VALUE self){
  return Qnil;
}


/* Batch QR Factorization */

/*Device pointer*/

static VALUE rb_cublasSgeqrfBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgeqrfBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgeqrfBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgeqrfBatched(VALUE self){
  return Qnil;
}


/* Least Square Min only m >= n and Non-transpose supported */

/*Device pointer*/

static VALUE rb_cublasSgelsBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDgelsBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCgelsBatched(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZgelsBatched(VALUE self){
  return Qnil;
}


/* DGMM */

static VALUE rb_cublasSdgmm(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDdgmm(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCdgmm(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZdgmm(VALUE self){
  return Qnil;
}


/* TPTTR : Triangular Pack format to Triangular format */

static VALUE rb_cublasStpttr(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtpttr(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtpttr(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtpttr(VALUE self){
  return Qnil;
}


/* TRTTP : Triangular format to Triangular Pack format */

static VALUE rb_cublasStrttp(VALUE self){
  return Qnil;
}

static VALUE rb_cublasDtrttp(VALUE self){
  return Qnil;
}

static VALUE rb_cublasCtrttp(VALUE self){
  return Qnil;
}

static VALUE rb_cublasZtrttp(VALUE self){
  return Qnil;
}
