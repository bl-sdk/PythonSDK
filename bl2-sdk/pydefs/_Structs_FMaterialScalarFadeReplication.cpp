#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMaterialScalarFadeReplication()
{
    class_< FMaterialScalarFadeReplication >("FMaterialScalarFadeReplication", no_init)
        .def_readwrite("Name", &FMaterialScalarFadeReplication::Name)
        .def_readwrite("StartValue", &FMaterialScalarFadeReplication::StartValue)
        .def_readwrite("EndValue", &FMaterialScalarFadeReplication::EndValue)
        .def_readwrite("FadeTime", &FMaterialScalarFadeReplication::FadeTime)
  ;
}