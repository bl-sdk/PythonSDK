#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleSysParam()
{
    class_< FParticleSysParam >("FParticleSysParam", no_init)
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