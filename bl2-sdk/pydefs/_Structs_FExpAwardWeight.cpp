#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FExpAwardWeight()
{
    class_< FExpAwardWeight >("FExpAwardWeight", no_init)
        .def_readwrite("Players", &FExpAwardWeight::Players)
        .def_readwrite("KillerExpBonus", &FExpAwardWeight::KillerExpBonus)
        .def_readwrite("ExpWeight", &FExpAwardWeight::ExpWeight)
  ;
}