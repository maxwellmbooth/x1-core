package mem_pkg;
    // STRUCTS
    // Memory request
    typedef struct packed {
        logic [3:0] epoch;
        logic [3:0] id;
        logic we;
        logic [31:0] addr;
        logic [XLEN-1:0] wdata;
    } mem_req_t;

    // Memory response
    typedef struct packed {
        logic [3:0] epoch;
        logic [3:0] id;
        logic addr_invalid;
        logic [XLEN-1:0] rdata;
    } mem_rsp_t;
endpackage