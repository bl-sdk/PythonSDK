#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBodyInstanceDataUnion()
{
    class_< FBodyInstanceDataUnion >("FBodyInstanceDataUnion", no_init)
        .def_readwrite("Data", &FBodyInstanceDataUnion::Data)
        .def_readwrite("ParentAttachmentIdentifier", &FBodyInstanceDataUnion::ParentAttachmentIdentifier)
        .def_readwrite("AttachmentBaseInstanceDataIndex", &FBodyInstanceDataUnion::AttachmentBaseInstanceDataIndex)
        .def_readwrite("SwitchIdentifier", &FBodyInstanceDataUnion::SwitchIdentifier)
  ;
}