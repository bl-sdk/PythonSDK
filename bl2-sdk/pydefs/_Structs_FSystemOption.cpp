#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSystemOption()
{
    class_< FSystemOption >("FSystemOption", no_init)
        .def_readwrite("Name", &FSystemOption::Name)
        .def_readwrite("ValueCount", &FSystemOption::ValueCount)
        .def_readwrite("CurrValue", &FSystemOption::CurrValue)
        .def_readwrite("ValueStrings", &FSystemOption::ValueStrings)
  ;
}