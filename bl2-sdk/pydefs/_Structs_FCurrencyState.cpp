#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCurrencyState()
{
    class_< FCurrencyState >("FCurrencyState", no_init)
        .def_readwrite("FormOfCurrency", &FCurrencyState::FormOfCurrency)
        .def_readwrite("StatName", &FCurrencyState::StatName)
        .def_readwrite("CurrentAmount", &FCurrencyState::CurrentAmount)
        .def_readwrite("LastKnownAmount", &FCurrencyState::LastKnownAmount)
  ;
}