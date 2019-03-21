#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBalanceFormula()
{
    class_< FBalanceFormula >("FBalanceFormula", no_init)
        .def_readwrite("Multiplier", &FBalanceFormula::Multiplier)
        .def_readwrite("Level", &FBalanceFormula::Level)
        .def_readwrite("Power", &FBalanceFormula::Power)
        .def_readwrite("Offset", &FBalanceFormula::Offset)
  ;
}