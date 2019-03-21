#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInfoBarData()
{
    class_< FInfoBarData >("FInfoBarData", no_init)
        .def_readwrite("Type", &FInfoBarData::Type)
        .def_readwrite("Amount", &FInfoBarData::Amount)
  ;
}