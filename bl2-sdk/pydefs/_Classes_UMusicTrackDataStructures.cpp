#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMusicTrackDataStructures()
{
    class_< UMusicTrackDataStructures, bases< UObject >  , boost::noncopyable>("UMusicTrackDataStructures", no_init)
        .def("StaticClass", &UMusicTrackDataStructures::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}