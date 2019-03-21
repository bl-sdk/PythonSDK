#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGbxMessageDefinition()
{
    class_< UGbxMessageDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGbxMessageDefinition", no_init)
        .def_readwrite("NameKey", &UGbxMessageDefinition::NameKey)
        .def_readwrite("Radius", &UGbxMessageDefinition::Radius)
        .def_readwrite("SecondsBetweenSends", &UGbxMessageDefinition::SecondsBetweenSends)
        .def_readwrite("MaxTimeToKeepSending", &UGbxMessageDefinition::MaxTimeToKeepSending)
        .def_readwrite("DupeCriteria", &UGbxMessageDefinition::DupeCriteria)
        .def_readwrite("MaxRecipients", &UGbxMessageDefinition::MaxRecipients)
        .def("StaticClass", &UGbxMessageDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}