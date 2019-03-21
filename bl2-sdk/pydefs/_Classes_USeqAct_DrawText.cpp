#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_DrawText()
{
    class_< USeqAct_DrawText, bases< USequenceAction >  , boost::noncopyable>("USeqAct_DrawText", no_init)
        .def_readwrite("DisplayTimeSeconds", &USeqAct_DrawText::DisplayTimeSeconds)
        .def_readwrite("DrawTextInfo", &USeqAct_DrawText::DrawTextInfo)
        .def("StaticClass", &USeqAct_DrawText::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_DrawText::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}