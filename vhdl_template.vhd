--------------------------------------------------------------------------------
-- (c) Organisation
-- Name:   Project Name 
-- URL:    Address of Git Repo 
-- Author: Name 
-- Date:   xx/xx/xx 
--------------------------------------------------------------------------------
--! File: Filename.vhd 
-- Revision:  
--     xxx : Brief description of changes made 
--     xxx : etc. 
--
--! @brief Brief descriptive paragraph of the file contents.
-- Description: Detailed descriptive paragraph of the file contents. 
--------------------------------------------------------------------------------
-- Targeted device: <Family::ProASIC3> <Die::A3P125> <Package::144 TQFP> 
--------------------------------------------------------------------------------

--! Use standard library
library ieee;
--! Use logic elements
use ieee.std_logic_1164.all;
 
--! Mux entity brief description
 
--! Detailed description of this 
--! mux design element.
entity mux_using_with is
    port (
        din_0   : in  std_logic; --! Mux first input
        din_1   : in  std_logic; --! Mux Second input
        sel     : in  std_logic; --! Select input
        mux_out : out std_logic  --! Mux output
    );
end entity;
 
--! @brief Architecture definition of the MUX
--! @details More details about this mux element.
architecture behavior of mux_using_with is
begin
    with (sel) select
    mux_out <= din_0 when '0',
               din_1 when others;
end architecture;

https://vhdl-style-guide.readthedocs.io/en/latest/index.html#
 
