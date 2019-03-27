#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUniqueNetId(py::module &m)
{
    py::class_< FUniqueNetId >(m, "FUniqueNetId")
        .def_readwrite("Uid", &FUniqueNetId::Uid)
  ;
}