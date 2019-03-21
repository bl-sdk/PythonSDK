#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodeSequenceBlendBase()
{
    class_< UAnimNodeSequenceBlendBase, bases< UAnimNodeSequence >  , boost::noncopyable>("UAnimNodeSequenceBlendBase", no_init)
        .def_readwrite("Anims", &UAnimNodeSequenceBlendBase::Anims)
        .def("StaticClass", &UAnimNodeSequenceBlendBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}