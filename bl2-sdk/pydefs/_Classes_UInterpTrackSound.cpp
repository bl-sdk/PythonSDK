#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackSound()
{
    class_< UInterpTrackSound, bases< UInterpTrackVectorBase >  , boost::noncopyable>("UInterpTrackSound", no_init)
        .def_readwrite("Sounds", &UInterpTrackSound::Sounds)
        .def("StaticClass", &UInterpTrackSound::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}