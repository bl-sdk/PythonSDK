#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemPoolInfo(py::object m)
{
    py::class_< FItemPoolInfo >(m, "FItemPoolInfo")
        .def_readwrite("ItemPool", &FItemPoolInfo::ItemPool)
        .def_readwrite("PoolProbability", &FItemPoolInfo::PoolProbability)
  ;
}