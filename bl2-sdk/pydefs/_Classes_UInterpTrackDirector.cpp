#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackDirector()
{
    class_< UInterpTrackDirector, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackDirector", no_init)
        .def_readwrite("CutTrack", &UInterpTrackDirector::CutTrack)
        .def("StaticClass", &UInterpTrackDirector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}