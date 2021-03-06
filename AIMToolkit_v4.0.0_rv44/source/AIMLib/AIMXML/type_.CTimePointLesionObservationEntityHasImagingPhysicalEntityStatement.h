/*
*  2007 � 2013 Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CTimePointLesionObservationEntityHasImagingPhysicalEntityStatement
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CTimePointLesionObservationEntityHasImagingPhysicalEntityStatement

#include "type_.CImageAnnotationStatement.h"


namespace AIMXML
{

class CTimePointLesionObservationEntityHasImagingPhysicalEntityStatement : public ::AIMXML::CImageAnnotationStatement
{
public:
	AIMXML_EXPORT CTimePointLesionObservationEntityHasImagingPhysicalEntityStatement(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CTimePointLesionObservationEntityHasImagingPhysicalEntityStatement(CTimePointLesionObservationEntityHasImagingPhysicalEntityStatement const& init);
	void operator=(CTimePointLesionObservationEntityHasImagingPhysicalEntityStatement const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CTimePointLesionObservationEntityHasImagingPhysicalEntityStatement); }
	AIMXML_EXPORT void SetXsiType();
};


}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA__ALTOVA_CTimePointLesionObservationEntityHasImagingPhysicalEntityStatement
