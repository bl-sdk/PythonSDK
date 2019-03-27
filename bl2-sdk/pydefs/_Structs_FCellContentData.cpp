#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCellContentData(py::module &m)
{
    py::class_< FCellContentData >(m, "FCellContentData")
        .def_readwrite("Tex", &FCellContentData::Tex)
        .def_readwrite("Mesh", &FCellContentData::Mesh)
        .def_readwrite("Inv", &FCellContentData::Inv)
        .def_readwrite("ExtArrayIndex", &FCellContentData::ExtArrayIndex)
  ;
}