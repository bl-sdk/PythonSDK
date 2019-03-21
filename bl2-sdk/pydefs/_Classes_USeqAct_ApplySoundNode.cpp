#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ApplySoundNode()
{
    class_< USeqAct_ApplySoundNode, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ApplySoundNode", no_init)
        .def_readwrite("PlaySound", &USeqAct_ApplySoundNode::PlaySound)
        .def_readwrite("ApplyNode", &USeqAct_ApplySoundNode::ApplyNode)
        .def("StaticClass", &USeqAct_ApplySoundNode::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}