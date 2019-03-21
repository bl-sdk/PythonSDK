#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FResourcePoolReference()
{
    py::class_< FResourcePoolReference >("FResourcePoolReference")
        .def_readwrite("PoolManager", &FResourcePoolReference::PoolManager)
        .def_readwrite("PoolIndexInManager", &FResourcePoolReference::PoolIndexInManager)
        .def_readwrite("PoolGUID", &FResourcePoolReference::PoolGUID)
        .def_readwrite("Data", &FResourcePoolReference::Data)
  ;
}