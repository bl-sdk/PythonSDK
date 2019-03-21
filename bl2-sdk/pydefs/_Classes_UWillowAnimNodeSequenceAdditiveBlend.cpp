#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeSequenceAdditiveBlend()
{
    class_< UWillowAnimNodeSequenceAdditiveBlend, bases< UAnimNodeSequence >  , boost::noncopyable>("UWillowAnimNodeSequenceAdditiveBlend", no_init)
        .def_readwrite("AddAnimSeqName", &UWillowAnimNodeSequenceAdditiveBlend::AddAnimSeqName)
        .def_readwrite("AddAnimSeq", &UWillowAnimNodeSequenceAdditiveBlend::AddAnimSeq)
        .def_readwrite("AddAnimLinkupIndex", &UWillowAnimNodeSequenceAdditiveBlend::AddAnimLinkupIndex)
        .def("StaticClass", &UWillowAnimNodeSequenceAdditiveBlend::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetAddAnim", &UWillowAnimNodeSequenceAdditiveBlend::SetAddAnim)
        .def("SetAnim", &UWillowAnimNodeSequenceAdditiveBlend::SetAnim)
        .staticmethod("StaticClass")
  ;
}