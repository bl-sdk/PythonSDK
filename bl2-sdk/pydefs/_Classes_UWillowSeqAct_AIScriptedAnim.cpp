#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScriptedAnim()
{
    class_< UWillowSeqAct_AIScriptedAnim, bases< USeqAct_Latent >  , boost::noncopyable>("UWillowSeqAct_AIScriptedAnim", no_init)
        .def_readwrite("Anim", &UWillowSeqAct_AIScriptedAnim::Anim)
        .def_readwrite("EditInlineAnim", &UWillowSeqAct_AIScriptedAnim::EditInlineAnim)
        .def("StaticClass", &UWillowSeqAct_AIScriptedAnim::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAnim", &UWillowSeqAct_AIScriptedAnim::GetAnim, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}