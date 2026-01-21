transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl/pkg {C:/Users/mboot/Projects/x1-core/rtl/pkg/common_pkg.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/ram.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/regfile.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/rom.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/program_counter.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/control_unit.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/alu.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/stage_if.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/stage_id.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/stage_ex.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/stage_mem.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/stage_wb.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/core.sv}
vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/rtl {C:/Users/mboot/Projects/x1-core/rtl/top.sv}

vlog -sv -work work +incdir+C:/Users/mboot/Projects/x1-core/fpga/intel/quartus/../../../tb {C:/Users/mboot/Projects/x1-core/fpga/intel/quartus/../../../tb/top_tb.sv}

vsim -t 1ps -L altera_ver -L lpm_ver -L sgate_ver -L altera_mf_ver -L altera_lnsim_ver -L cyclonev_ver -L cyclonev_hssi_ver -L cyclonev_pcie_hip_ver -L rtl_work -L work -voptargs="+acc"  top_tb

add wave *
view structure
view signals
run -all
