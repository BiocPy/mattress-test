/* DO NOT MODIFY: this is automatically generated by the ctypes-compiler */

#include <cstring>
#include <stdexcept>

#ifdef _WIN32
#define PYAPI __declspec(dllexport)
#else
#define PYAPI
#endif

static char* copy_error_message(const char* original) {
    auto n = std::strlen(original);
    auto copy = new char[n + 1];
    std::strcpy(copy, original);
    return copy;
}

void extract_column(void*, int, double*);

int extract_ncol(const void*);

int extract_nrow(const void*);

void extract_row(void*, int, double*);

int extract_sparse(const void*);

void free_mat(void*);

void* initialize_compressed_sparse_matrix(int, int, uint64_t, const char*, void*, const char*, void*, void*, uint8_t);

void* initialize_dense_matrix(int, int, const char*, void*, uint8_t);

extern "C" {

PYAPI void free_error_message(char** msg) {
    delete [] *msg;
}

PYAPI void py_extract_column(void* rawmat, int c, double* output, int* errcode, char** errmsg) {
    try {
        extract_column(rawmat, c, output);
    } catch(std::exception& e) {
        *errcode = 1;
        *errmsg = copy_error_message(e.what());
    } catch(...) {
        *errcode = 1;
        *errmsg = copy_error_message("unknown C++ exception");
    }
}

PYAPI int py_extract_ncol(const void* mat, int* errcode, char** errmsg) {
    int output = 0;
    try {
        output = extract_ncol(mat);
    } catch(std::exception& e) {
        *errcode = 1;
        *errmsg = copy_error_message(e.what());
    } catch(...) {
        *errcode = 1;
        *errmsg = copy_error_message("unknown C++ exception");
    }
    return output;
}

PYAPI int py_extract_nrow(const void* mat, int* errcode, char** errmsg) {
    int output = 0;
    try {
        output = extract_nrow(mat);
    } catch(std::exception& e) {
        *errcode = 1;
        *errmsg = copy_error_message(e.what());
    } catch(...) {
        *errcode = 1;
        *errmsg = copy_error_message("unknown C++ exception");
    }
    return output;
}

PYAPI void py_extract_row(void* rawmat, int r, double* output, int* errcode, char** errmsg) {
    try {
        extract_row(rawmat, r, output);
    } catch(std::exception& e) {
        *errcode = 1;
        *errmsg = copy_error_message(e.what());
    } catch(...) {
        *errcode = 1;
        *errmsg = copy_error_message("unknown C++ exception");
    }
}

PYAPI int py_extract_sparse(const void* mat, int* errcode, char** errmsg) {
    int output = 0;
    try {
        output = extract_sparse(mat);
    } catch(std::exception& e) {
        *errcode = 1;
        *errmsg = copy_error_message(e.what());
    } catch(...) {
        *errcode = 1;
        *errmsg = copy_error_message("unknown C++ exception");
    }
    return output;
}

PYAPI void py_free_mat(void* mat, int* errcode, char** errmsg) {
    try {
        free_mat(mat);
    } catch(std::exception& e) {
        *errcode = 1;
        *errmsg = copy_error_message(e.what());
    } catch(...) {
        *errcode = 1;
        *errmsg = copy_error_message("unknown C++ exception");
    }
}

PYAPI void* py_initialize_compressed_sparse_matrix(int nr, int nc, uint64_t nz, const char* dtype, void* dptr, const char* itype, void* iptr, void* indptr, uint8_t byrow, int* errcode, char** errmsg) {
    void* output = NULL;
    try {
        output = initialize_compressed_sparse_matrix(nr, nc, nz, dtype, dptr, itype, iptr, indptr, byrow);
    } catch(std::exception& e) {
        *errcode = 1;
        *errmsg = copy_error_message(e.what());
    } catch(...) {
        *errcode = 1;
        *errmsg = copy_error_message("unknown C++ exception");
    }
    return output;
}

PYAPI void* py_initialize_dense_matrix(int nr, int nc, const char* type, void* ptr, uint8_t byrow, int* errcode, char** errmsg) {
    void* output = NULL;
    try {
        output = initialize_dense_matrix(nr, nc, type, ptr, byrow);
    } catch(std::exception& e) {
        *errcode = 1;
        *errmsg = copy_error_message(e.what());
    } catch(...) {
        *errcode = 1;
        *errmsg = copy_error_message("unknown C++ exception");
    }
    return output;
}

}
