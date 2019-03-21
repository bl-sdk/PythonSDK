#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInstanceDataUnion()
{
    class_< FInstanceDataUnion >("FInstanceDataUnion", no_init)
        .def_readwrite("Name", &FInstanceDataUnion::Name)
        .def_readwrite("Type", &FInstanceDataUnion::Type)
        .def_readwrite("Replication", &FInstanceDataUnion::Replication)
        .def_readwrite("MaxSwitchValue", &FInstanceDataUnion::MaxSwitchValue)
        .def_readwrite("BitsRequiredForMaxSwitchValue", &FInstanceDataUnion::BitsRequiredForMaxSwitchValue)
        .def_readwrite("Int", &FInstanceDataUnion::Int)
        .def_readwrite("Float", &FInstanceDataUnion::Float)
        .def_readwrite("Vector", &FInstanceDataUnion::Vector)
        .def_readwrite("Object", &FInstanceDataUnion::Object)
        .def_readwrite("ComponentData", &FInstanceDataUnion::ComponentData)
        .def_readwrite("String", &FInstanceDataUnion::String)
        .def_readwrite("BodyCompositionIndex", &FInstanceDataUnion::BodyCompositionIndex)
  ;
}