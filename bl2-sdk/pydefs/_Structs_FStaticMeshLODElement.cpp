#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStaticMeshLODElement()
{
    class_< FStaticMeshLODElement >("FStaticMeshLODElement", no_init)
        .def_readwrite("Material", &FStaticMeshLODElement::Material)
        .def_readonly("UnknownData00", &FStaticMeshLODElement::UnknownData00)
  ;
}