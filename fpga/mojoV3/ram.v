module ram #(parameter SIZE = 1024)(
	//port A
    input clka_i,
	input ena_i,
	input [3:0] wea_i,
    input [31:2] addra_i,
    input [31:0] dataa_i, 
    output [31:0] dataa_o,


	// port B
    input clkb_i,
	input enb_i,
	input [3:0] web_i,
    input [31:2] addrb_i,
    input [31:0] datab_i, 
    output [31:0] datab_o
);
 
ram_dp8  #(.SIZE(SIZE), .FILENAME("mem_0.hex")) dp8_0(
	.clka_i(clka_i),
	.ena_i(ena_i),
	.wea_i(wea_i[3]),
	.addra_i(addra_i),
	.dataa_i(dataa_i[31:24]),
	.dataa_o(dataa_o[31:24]),

	.clkb_i(clkb_i),
	.enb_i(enb_i),
	.web_i(web_i[3]),
	.addrb_i(addrb_i),
	.datab_i(datab_i[31:24]),
	.datab_o(datab_o[31:24])
);


ram_dp8 #(.SIZE(SIZE), .FILENAME("mem_1.hex")) dp8_1(
	.clka_i(clka_i),
	.ena_i(ena_i),
	.wea_i(wea_i[2]),
	.addra_i(addra_i),
	.dataa_i(dataa_i[23:16]),
	.dataa_o(dataa_o[23:16]),

	.clkb_i(clkb_i),
	.enb_i(enb_i),
	.web_i(web_i[2]),
	.addrb_i(addrb_i),
	.datab_i(datab_i[23:16]),
	.datab_o(datab_o[23:16])
);


ram_dp8 #(.SIZE(SIZE), .FILENAME("mem_2.hex")) dp8_2(
	.clka_i(clka_i),
	.ena_i(ena_i),
	.wea_i(wea_i[1]),
	.addra_i(addra_i),
	.dataa_i(dataa_i[15:8]),
	.dataa_o(dataa_o[15:8]),

	.clkb_i(clkb_i),
	.enb_i(enb_i),
	.web_i(web_i[1]),
	.addrb_i(addrb_i),
	.datab_i(datab_i[15:8]),
	.datab_o(datab_o[15:8])
);


ram_dp8 #(.SIZE(SIZE), .FILENAME("mem_3.hex")) dp8_3(
	.clka_i(clka_i),
	.ena_i(ena_i),
	.wea_i(wea_i[0]),
	.addra_i(addra_i),
	.dataa_i(dataa_i[7:0]),
	.dataa_o(dataa_o[7:0]),

	.clkb_i(clkb_i),
	.enb_i(enb_i),
	.web_i(web_i[0]),
	.addrb_i(addrb_i),
	.datab_i(datab_i[7:0]),
	.datab_o(datab_o[7:0])
);
 
endmodule

module ram_dp8 #(parameter SIZE=1024, parameter FILENAME="")(

	//port A
    input clka_i,
	input ena_i,
	input  wea_i,
    input [31:2] addra_i,
    input [7:0] dataa_i, 
    output reg [7:0] dataa_o,

	// port B
    input clkb_i,
	input enb_i,
	input web_i,
    input [31:2] addrb_i,
    input [7:0] datab_i, 
    output reg[7:0] datab_o
);

reg [7:0] mem [SIZE-1:0];

// Port A
always @(posedge clka_i) begin
    dataa_o      <= mem[addra_i];
    if(wea_i) begin
        dataa_o      <= dataa_i;
        mem[addra_i] <= dataa_i;
    end
end
 
// Port B
always @(posedge clkb_i) begin
    datab_o      <= mem[addrb_i];
    if(web_i) begin
        datab_o     <= datab_i;
        mem[addrb_i] <= datab_i;
    end
end

initial begin
    `ifdef SIMULATION
    $readmemh({"./sw/",FILENAME}, mem);
    `else
    $readmemh({"../sw/",FILENAME}, mem);
    `endif
end

endmodule
