#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FtMenuTextPos()
{
    class_< FtMenuTextPos >("FtMenuTextPos", no_init)
        .def_readwrite("TextHAlign", &FtMenuTextPos::TextHAlign)
        .def_readwrite("TextXPos", &FtMenuTextPos::TextXPos)
        .def_readwrite("TextVAlign", &FtMenuTextPos::TextVAlign)
        .def_readwrite("TextYPos", &FtMenuTextPos::TextYPos)
  ;
}