#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USnapshotInterface()
{
    class_< USnapshotInterface, bases< UObject >  , boost::noncopyable>("USnapshotInterface", no_init)
        .def("StaticClass", &USnapshotInterface::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}