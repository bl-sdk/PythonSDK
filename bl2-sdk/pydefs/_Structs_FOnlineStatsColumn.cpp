#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineStatsColumn(py::object m)
{
    py::class_< FOnlineStatsColumn >(m, "FOnlineStatsColumn")
        .def_readwrite("ColumnNo", &FOnlineStatsColumn::ColumnNo)
        .def_readwrite("StatValue", &FOnlineStatsColumn::StatValue)
  ;
}