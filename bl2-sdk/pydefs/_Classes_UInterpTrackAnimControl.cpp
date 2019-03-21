#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackAnimControl()
{
    class_< UInterpTrackAnimControl, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackAnimControl", no_init)
        .def_readwrite("AnimSets", &UInterpTrackAnimControl::AnimSets)
        .def_readwrite("SlotName", &UInterpTrackAnimControl::SlotName)
        .def_readwrite("AnimSeqs", &UInterpTrackAnimControl::AnimSeqs)
        .def("StaticClass", &UInterpTrackAnimControl::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}