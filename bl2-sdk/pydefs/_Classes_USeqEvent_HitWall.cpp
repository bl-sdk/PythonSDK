#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_HitWall()
{
    class_< USeqEvent_HitWall, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_HitWall", no_init)
        .def("StaticClass", &USeqEvent_HitWall::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}