#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSnapshotRecord()
{
    class_< UWillowSnapshotRecord, bases< USnapshotRecord >  , boost::noncopyable>("UWillowSnapshotRecord", no_init)
        .def("StaticClass", &UWillowSnapshotRecord::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}