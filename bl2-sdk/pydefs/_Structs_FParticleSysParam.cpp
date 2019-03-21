#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleSysParam(py::object m)
{
    py::class_< FParticleSysParam >(m, "FParticleSysParam")
        .def_readwrite("Name", &FParticleSysParam::Name)
        .def_readwrite("ParamType", &FParticleSysParam::ParamType)
        .def_readwrite("Scalar", &FParticleSysParam::Scalar)
        .def_readwrite("Scalar_Low", &FParticleSysParam::Scalar_Low)
        .def_readwrite("Vector", &FParticleSysParam::Vector)
        .def_readwrite("Vector_Low", &FParticleSysParam::Vector_Low)
        .def_readwrite("Color", &FParticleSysParam::Color)
        .def_readwrite("Actor", &FParticleSysParam::Actor)
        .def_readwrite("Material", &FParticleSysParam::Material)
        .def_readwrite("Socket", &FParticleSysParam::Socket)
  ;
}