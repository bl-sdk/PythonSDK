#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemPoolInfo()
{
    py::class_< FItemPoolInfo >("FItemPoolInfo")
        .def_readwrite("ItemPool", &FItemPoolInfo::ItemPool)
        .def_readwrite("PoolProbability", &FItemPoolInfo::PoolProbability)
  ;
}