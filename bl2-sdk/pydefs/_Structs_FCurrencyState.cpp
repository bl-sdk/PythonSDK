#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurrencyState(py::module &m)
{
    py::class_< FCurrencyState >(m, "FCurrencyState")
        .def_readwrite("FormOfCurrency", &FCurrencyState::FormOfCurrency)
        .def_readwrite("StatName", &FCurrencyState::StatName)
        .def_readwrite("CurrentAmount", &FCurrencyState::CurrentAmount)
        .def_readwrite("LastKnownAmount", &FCurrencyState::LastKnownAmount)
  ;
}