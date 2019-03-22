#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FResourcePoolReference(py::module &m)
{
    py::class_< FResourcePoolReference >(m, "FResourcePoolReference")
        .def_readwrite("PoolManager", &FResourcePoolReference::PoolManager)
        .def_readwrite("PoolIndexInManager", &FResourcePoolReference::PoolIndexInManager)
        .def_readwrite("PoolGUID", &FResourcePoolReference::PoolGUID)
        .def_readwrite("Data", &FResourcePoolReference::Data)
  ;
}