#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGestaltPartMatrices()
{
    class_< UGestaltPartMatrices, bases< UObject >  , boost::noncopyable>("UGestaltPartMatrices", no_init)
        .def_readwrite("GestaltAccessoryMeshList", &UGestaltPartMatrices::GestaltAccessoryMeshList)
        .def_readwrite("Matrices", &UGestaltPartMatrices::Matrices)
        .def_readwrite("ArchetypeName", &UGestaltPartMatrices::ArchetypeName)
        .def("StaticClass", &UGestaltPartMatrices::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}