#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTPOV()
{
    class_< FTPOV >("FTPOV", no_init)
        .def_readwrite("Location", &FTPOV::Location)
        .def_readwrite("Rotation", &FTPOV::Rotation)
        .def_readwrite("FOV", &FTPOV::FOV)
  ;
}