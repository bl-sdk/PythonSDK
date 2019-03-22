#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMaterialScalarFadeReplication(py::module &m)
{
    py::class_< FMaterialScalarFadeReplication >(m, "FMaterialScalarFadeReplication")
        .def_readwrite("Name", &FMaterialScalarFadeReplication::Name)
        .def_readwrite("StartValue", &FMaterialScalarFadeReplication::StartValue)
        .def_readwrite("EndValue", &FMaterialScalarFadeReplication::EndValue)
        .def_readwrite("FadeTime", &FMaterialScalarFadeReplication::FadeTime)
  ;
}