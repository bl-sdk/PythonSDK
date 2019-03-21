#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAITracker()
{
    class_< UAITracker, bases< UObject >  , boost::noncopyable>("UAITracker", no_init)
        .def_readonly("Snapshots", &UAITracker::Snapshots)
        .def_readwrite("SnapshotSize", &UAITracker::SnapshotSize)
        .def_readwrite("SnapshotIndex", &UAITracker::SnapshotIndex)
        .def_readwrite("DebugOwner", &UAITracker::DebugOwner)
        .def("StaticClass", &UAITracker::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}