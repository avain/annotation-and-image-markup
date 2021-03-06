/*
*  Copyright Northwestern University
*  Copyright Stanford University (ATB 1.0 and ATS 1.0)
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/



package edu.stanford.isis.atb.domain;

/**
 * @author Vitaliy Semeshko
 */
public interface Initializable {

	public boolean isInitialized();
	
	public void setInitialized(boolean initialized);
	
}
