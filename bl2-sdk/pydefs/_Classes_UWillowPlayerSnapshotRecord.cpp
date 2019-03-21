#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPlayerSnapshotRecord()
{
    class_< UWillowPlayerSnapshotRecord, bases< USnapshotRecord >  , boost::noncopyable>("UWillowPlayerSnapshotRecord", no_init)
        .def_readwrite("MyWillowPawnName", &UWillowPlayerSnapshotRecord::MyWillowPawnName)
        .def("StaticClass", &UWillowPlayerSnapshotRecord::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}