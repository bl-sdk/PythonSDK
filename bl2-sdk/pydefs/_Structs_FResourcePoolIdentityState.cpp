#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FResourcePoolIdentityState()
{
    py::class_< FResourcePoolIdentityState >("FResourcePoolIdentityState")
        .def_readwrite("PoolDefinition", &FResourcePoolIdentityState::PoolDefinition)
        .def_readwrite("PoolGUID", &FResourcePoolIdentityState::PoolGUID)
  ;
}